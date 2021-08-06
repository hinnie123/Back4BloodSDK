// Class FramebufferCopier.FramebufferCopy
// Size: 0xa8 (Inherited: 0x30)
struct UFramebufferCopy : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UTextureRenderTarget2D* TextureTarget; // 0x38(0x08)
	struct FMulticastInlineDelegate FramebufferCopyReady; // 0x40(0x10)
	char pad_50[0x58]; // 0x50(0x58)

	void SetPlayerIndex(int32_t InPlayerIndex, bool bAllowReaquire); // Function FramebufferCopier.FramebufferCopy.SetPlayerIndex // (None) // @ game+0xfffffffec0000000
};

