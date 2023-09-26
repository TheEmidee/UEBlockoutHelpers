namespace UnrealBuildTool.Rules
{
    public class BlockoutHelpers : ModuleRules
    {
        public BlockoutHelpers( ReadOnlyTargetRules Target )
            : base( Target )
        {
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
            

            PrivateIncludePaths.Add("BlockoutHelpers/Private");
            
            PublicDependencyModuleNames.AddRange(
                new string[] { 
                    "Core",
                    "CoreUObject",
                    "Engine"
                }
            );
        }
    }
}
