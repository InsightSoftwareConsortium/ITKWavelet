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
#ifndef itkImageList_h
#define itkImageList_h

#include "itkObjectList.h"

namespace itk
{
/** \class ImageList
 *  \brief This class represent a list of images.
 *
 * It is derived from the itkObjectList class, which allows manipulating an ITK/ITK
 * object list with the appropriate formalism (iterators, accessors).
 * \sa ObjectList
 *
 * \ingroup ITKObjectList
 */

template <class TImage>
class ITK_EXPORT ImageList
  : public ObjectList<TImage>
{
public:
  /** Standard typedefs */
  typedef ImageList                     Self;
  typedef ObjectList<TImage>            Superclass;
  typedef itk::SmartPointer<Self>       Pointer;
  typedef itk::SmartPointer<const Self> ConstPointer;

  /** Type macro */
  itkTypeMacro(ImageList, ObjectList);

  /** Creation through object factory macro */
  itkNewMacro(Self);

  /** Template parameter typedefs */
  typedef TImage                                    ImageType;
  typedef typename Superclass::ObjectPointerType    ImagePointerType;
  typedef typename Superclass::Iterator             Iterator;
  typedef typename Superclass::ConstIterator        ConstIterator;
  typedef typename Superclass::ReverseIterator      ReverseIterator;
  typedef typename Superclass::ReverseConstIterator ReverseConstIterator;

  /**
   * Update images in the list.
   */
  virtual void UpdateOutputInformation(void);
  virtual void PropagateRequestedRegion(void)
    throw (itk::InvalidRequestedRegionError);
  virtual void UpdateOutputData(void);

protected:
  /** Constructor */
  ImageList() {};
  /** Destructor */
  virtual ~ImageList() {}
  /** PrintSelf method */
  void PrintSelf(std::ostream& os, itk::Indent indent) const
  {
    Superclass::PrintSelf(os, indent);
  }

private:
  ImageList(const Self &); //purposely not implemented
  void operator =(const Self&); //purposely not implemented
};
} // End namespace itk

#ifndef ITK_MANUAL_INSTANTIATION
#include "itkImageList.hxx"
#endif

#endif
