#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TeleportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeleportData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& PosX() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& PosY() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	 Nullable1<float>*& Rotation() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TeleportData*, uintptr_t))(Il2CppBase() + 0x16AD778))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TeleportData*, uintptr_t))(Il2CppBase() + 0x16AD7FC))(this, reader);
	}

};

