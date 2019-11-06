//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently.

#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers.
#endif

#include <windows.h>

#pragma warning(push)
#pragma warning(disable : 4324)
#include "d3d12.h"
#include "d3d12_1.h"
#include "d3dx12.h"
#pragma warning(pop)
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include <atlbase.h>
#include <dxgi1_4.h>

#include <shellapi.h>
#include <string>
#include <wrl.h>
