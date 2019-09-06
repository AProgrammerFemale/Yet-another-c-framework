//Copyright Alice Framework, All Rights Reserved
#pragma once
#include <Basic/Types.hpp>

enum class ExceptionType : u16
{
    None,
    AppPathError,
    TypeNotSupported,
    CpuIdNotSupported,
    IndexOverflow,
    IsReadOnly,
    OperationWithoutSuccess,
    FromIsGreaterThanTo,
    FileDoNotExists,
    FileIsAFolder,
    FileHandlerCouldNotBeCreated,
    FileSizeCouldNotBeExtracted,
    FileAlreadyExists,
    FileCouldNotBeCreated,
    FileCouldNotBeDeleted,
    FileCouldNotBeReaded,
    FileCouldNotBeWritten,
    MemoryAllocationFailed,
    LimitOverflow,
    PngNoMagic,
    PngWrongHeaderSize,
    PngNoIHDR,
    PngWrongChecksum,
    PngInvalidColorTypeBitDepthCombo,
    PngChunkUnderflow,
    PngChunkOverflow,
    PngUnsupportedChunk,
    
};