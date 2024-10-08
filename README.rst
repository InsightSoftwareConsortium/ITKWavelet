ITKWavelet
==========

.. image:: https://github.com/InsightSoftwareConsortium/ITKWavelet/actions/workflows/build-test-package.yml/badge.svg
    :target: https://github.com/InsightSoftwareConsortium/ITKWavelet/actions/workflows/build-test-package.yml
    :alt: Build Status

.. image:: https://img.shields.io/badge/License-Apache%202.0-blue.svg
    :target: https://github.com/InsightSoftwareConsortium/ITKWavelet/blob/master/LICENSE
    :alt: License

Incomplete / Work in progress.

If you are interested in 2D wavelets with the A trou algorithm, `check Orfeo Tool Box.
<https://github.com/orfeotoolbox>`_

If you need wavelets in 2D or 3D with a Steerable Pyramid, check my ITK External Module:
`ITKIsotropicWavelets.
<https://github.com/phcerdan/ITKIsotropicWavelets>`_


Dev history on `fork ITK branch
<https://github.com/phcerdan/ITK/tree/wavelet>`_


.. This is a module for the `Insight Toolkit (ITK) <http://itk.org>`_ for
.. segmentation and registration. It is designed to work with the ITKv4 modular
.. system.
..
.. This module is a template to be used as a starting point for a new ITK module.
..
..
.. Getting Started
.. ---------------
..
.. The following is a brief list of instructions to get a external module
.. started in a new repository::
..
..   mkdir ITK/Modules/External/ITKMyModule
..   cd ITK/Modules/External/ITKMyModule
..   git init
..   git fetch https://github.com/InsightSoftwareConsortium/ITKModuleTemplate.git
..   git merge FETCH_HEAD
..   rm -rf .git
..   git init
..   git add . .*
..   git commit -m "ENH: Initial ITKModuleTemplate import"
..
.. Create a new repository account via GitHub's web interface. The module should
.. follow the naming convention, *ITK<MyModuleName>*.
..
.. Search and replace *ModuleTemplate* with *MyModuleName* in ``CMakeLists.txt``
.. and ``itk-module.cmake``.
..
.. Documentation on `how to populate the module
.. <https://itk.org/ITKSoftwareGuide/html/Book1/ITKSoftwareGuide-Book1ch9.html#x50-1430009>`_
.. can be found in the `ITK Software Guide
.. <https://itk.org/ITKSoftwareGuide/html/>`_.
..
..
.. Remote Module
.. -------------
..
.. After an `Insight Journal <http://www.insight-journal.org/>`_ article has been
.. submitted, the module can be included in ITK as a `remote module
.. <http://www.itk.org/Wiki/ITK/Policy_and_Procedures_for_Adding_Remote_Modules>`_.
.. Add a file in "ITK/Modules/Remote" called "YourModule.remote.cmake", for this
.. module it would be "ExternalExample.remote.cmake" with the followlowing
.. contents::
..
..   itk_fetch_module(MyModule
..     "A description of the a module."
..     GIT_REPOSITORY http://github.com/myuser/ITKMyModule.git
..     GIT_TAG abcdef012345
..     )
..
..
.. Python Packages
.. ---------------
..
.. After enabling builds for the GitHub repository with a `CircleCI
.. <https://circleci.com/>`_, `TravisCI <https://travis-ci.org/>`_,
.. and `AppVeyor <https://www.appveyor.com/>`_ account, Python wheel
.. packages will be available with the continuous integration builds.
..
.. .. figure:: https://i.imgur.com/OEujGsl.png
..   :alt: CircleCI Python wheels
..
..   Linux Python package wheel links can be found in the CircleCI *Artifacts*
..   tab after expanding the available folders.
..
.. .. figure:: https://i.imgur.com/Yw3ziU7.png
..   :alt: TravisCI Python wheels
..
..   macOS Python package wheels can be downloaded by going to the `transfer.sh`
..   link found in the build output.
..
.. .. figure:: http://imgur.com/Cj5vs3S.png
..   :alt: AppVeyor Python wheels
..
..   Windows Python package wheel links can be found in the AppVeyor *Artifacts* tab.
..
..
.. License
.. -------
..
.. This software is distributed under the Apache 2.0 license. Please see
.. the *LICENSE* file for details.
..
..
.. Authors
.. -------
..
.. * Bradley Lowekamp
.. * Matt McCormick
.. * Jean-Baptiste VIMORT
