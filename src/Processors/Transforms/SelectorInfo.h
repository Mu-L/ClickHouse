#pragma once
#include <Processors/Chunk.h>
#include <Common/PODArray.h>

namespace DB
{

struct SelectorInfo : public ChunkInfo
{
    IColumn::Selector selector;
};

}
