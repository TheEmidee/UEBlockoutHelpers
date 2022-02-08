#pragma once

#include <CoreMinimal.h>
#include <Modules/ModuleInterface.h>
#include <Modules/ModuleManager.h>

class BLOCKOUTHELPERS_API IBlockoutHelpersModule : public IModuleInterface
{

public:
    static IBlockoutHelpersModule & Get()
    {
        static auto & singleton = FModuleManager::LoadModuleChecked< IBlockoutHelpersModule >( "BlockoutHelpers" );
        return singleton;
    }

    static bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded( "BlockoutHelpers" );
    }
};
