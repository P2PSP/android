Android application | P2PSP
========================

[![Join the chat at https://gitter.im/P2PSP/Android-player](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/P2PSP/Android-player?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

This project is aimed to implement a P2PSP client as an Android application. This project is aimed to create a peer implementation for Android devices.

Pre-requisites
-------------------
- Android Studio 2.0+ with [NDK](https://developer.android.com/ndk/) bundle.

Getting Started
---------------
1. [Download Android Studio](http://developer.android.com/sdk/index.html)
1. Launch Android Studio.
1. Open the sample directory.
1. Open *File/Project Structure...*
  - Click *Download* or *Select NDK location*.
1. Click *Tools/Android/Sync Project with Gradle Files*.
1. Click *Gradle/p2psp-android/app/build/buildDependents*.

This project uses the new [Gradle Experimental Android plugin](http://tools.android.com/tech-docs/new-build-system/gradle-experimental) with external lib support.

Android Project Configuration
-----------------------------------
 
To compile the Android project we need to link several libraries such as **Boost**, **LibVLC**  to the jni.

#### Boost

*   [https://github.com/emileb/Boost-for-Android-Prebuilt/tree/master/boost_1_53_0](https://github.com/emileb/Boost-for-Android-Prebuilt/tree/master/boost_1_53_0)
*    Boost static libraries specific to three ABI's namely `armeabi, armeabi-v7a, x86`.

#### LibVLC
*   We can build the LibVLC for Android by following this [AndroidCompile](https://wiki.videolan.org/AndroidCompile/) and then add it to the project.


Gradle Build Configuration
-----------------------------------
 
*    Builds `libp2psp.so`  native shared library
*    Used 3rd party Boost Static libraries ([https://github.com/emileb/Boost-for-Android-Prebuilt/tree/master/boost_1_53_0](https://github.com/emileb/Boost-for-Android-Prebuilt/tree/master/boost_1_53_0))
*    Builds shared library specific to three ABI's namely `armeabi, armeabi-v7a, x86`.

The key points regarding the build  are:
*    Inform Android Studio where lib/header is
*    Add lib dependency to application	
    >Details are inside projects' build.gradle files


Support
------------
If you've found an error in these samples, please [file an issue](https://github.com/cRAN-cg/Hello-libs-boost/issues/new).

Patches are encouraged, and may be submitted by [forking this project](https://github.com/P2PSP/p2psp-android/fork).


