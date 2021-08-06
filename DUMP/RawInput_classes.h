// Class RawInput.RawInputFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct URawInputFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FRegisteredDeviceInfo> GetRegisteredDevices(); // Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices // (None) // @ game+0xfffffffec0000000
};

// Class RawInput.RawInputSettings
// Size: 0x58 (Inherited: 0x40)
struct URawInputSettings : UDeveloperSettings {
	struct TArray<struct FRawInputDeviceConfiguration> DeviceConfigurations; // 0x40(0x10)
	bool bRegisterDefaultDevice; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

