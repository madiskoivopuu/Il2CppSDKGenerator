#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipValue"));
	}

	template <typename T = bool> T& Ignore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IgnoreRarity() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& IgnoreDuration() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Header() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Params() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& AdditionalCooldownText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& PreviewImagePath() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& PreviewDescription() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& CustomDurabilityText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& PreviewVideoPath() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& DontShowCooldown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ItemsListTooltip() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = Il2CppString*> T& ItemsListRG() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& WarningText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& PreviewHidden() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ToolTipValue*, uintptr_t))(Il2CppBase() + 0x14F27AC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ToolTipValue*, uintptr_t))(Il2CppBase() + 0x14F2AE0))(this, writer);
	}

};

}
