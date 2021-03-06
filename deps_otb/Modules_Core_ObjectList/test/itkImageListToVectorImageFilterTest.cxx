/*=========================================================================

  Program:   ORFEO Toolbox
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


  Copyright (c) Centre National d'Etudes Spatiales. All rights reserved.
  See OTBCopyright.txt for details.


  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkMacro.h"

#include "itkImageListToVectorImageFilter.h"
#include "itkVectorImage.h"
#include "itkImage.h"
#include "itkImageList.h"
#include "itkImageFileReader.h"
#include "itkImageFileWriter.h"

int itkImageListToVectorImageFilterTest(int itkNotUsed(argc), char * argv[])
{
  const unsigned int Dimension = 2;
  typedef unsigned char PixelType;

  char * infname1 = argv[1];
  char * infname2 = argv[2];
  char * infname3 = argv[3];
  char * outfname = argv[4];

  typedef itk::Image<PixelType, Dimension>       ImageType;
  typedef itk::VectorImage<PixelType, Dimension> VectorImageType;
  typedef itk::ImageList<ImageType>              ImageListType;

  // IO
  typedef itk::ImageFileReader<ImageType>       ReaderType;
  typedef itk::ImageFileWriter<VectorImageType> WriterType;

  typedef itk::ImageListToVectorImageFilter<ImageListType, VectorImageType> ImageListToVectorImageFilterType;

  // Instantiating object
  ImageListToVectorImageFilterType::Pointer filter = ImageListToVectorImageFilterType::New();

  // Building image list

  ReaderType::Pointer reader1, reader2, reader3;

  reader1 = ReaderType::New();
  reader1->SetFileName(infname1);

  reader2 = ReaderType::New();
  reader2->SetFileName(infname2);

  reader3 = ReaderType::New();
  reader3->SetFileName(infname3);

  ImageListType::Pointer imageList = ImageListType::New();
  imageList->PushBack(reader1->GetOutput());
  imageList->PushBack(reader2->GetOutput());
  imageList->PushBack(reader3->GetOutput());

  filter->SetInput(imageList);

  WriterType::Pointer writer = WriterType::New();
  writer->SetInput(filter->GetOutput());
  writer->SetFileName(outfname);
  writer->Update();

  return EXIT_SUCCESS;
}
