// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x30)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x60 (Inherited: 0x30)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x3]; // 0x30(0x1b)
	char pad_4B[0x15]; // 0x4b(0x15)
};

