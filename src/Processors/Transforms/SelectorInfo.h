#pragma once
#include <Processors/Chunk.h>

namespace DB
{

struct SelectorInfo : public ChunkInfo
{
    IColumn::Selector selector;
};

}
