#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SourceId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& EffectNames() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& EffectName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomEffectName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Notification() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(EffectData*, uintptr_t))(Il2CppBase() + 0x1AA8448))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(EffectData*, uintptr_t))(Il2CppBase() + 0x1AA84FC))(this, reader);
	}

};

