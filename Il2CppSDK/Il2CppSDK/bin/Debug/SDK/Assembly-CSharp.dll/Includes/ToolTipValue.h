#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipValue"));
	}

	template <typename R = bool> R& Ignore() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IgnoreRarity() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& IgnoreDuration() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = Il2CppString*> R& Prefix() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Header() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Params() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& AdditionalCooldownText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& PreviewImagePath() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& PreviewDescription() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& CustomDurabilityText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& PreviewVideoPath() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& DontShowCooldown() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& ItemsListTooltip() {
		return *(R*)((uintptr_t)this + 0x61);
	}
	template <typename R = Il2CppString*> R& ItemsListRG() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& WarningText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& PreviewHidden() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ToolTipValue*, uintptr_t))(Il2CppBase() + 0x14F27AC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ToolTipValue*, uintptr_t))(Il2CppBase() + 0x14F2AE0))(this, writer);
	}

};

