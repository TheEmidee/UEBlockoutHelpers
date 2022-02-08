#include "BlockoutHelpersModule.h"

class FBlockoutHelpersModule final : public IBlockoutHelpersModule
{
public:
    void StartupModule() override;
    void ShutdownModule() override;
};

IMPLEMENT_MODULE( FBlockoutHelpersModule, BlockoutHelpers )

void FBlockoutHelpersModule::StartupModule()
{
}

void FBlockoutHelpersModule::ShutdownModule()
{
}