#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SourceId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectNames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomEffectName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Notification() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(EffectData*, uintptr_t))(Il2CppBase() + 0x1AA8448))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(EffectData*, uintptr_t))(Il2CppBase() + 0x1AA84FC))(this, reader);
	}

};

