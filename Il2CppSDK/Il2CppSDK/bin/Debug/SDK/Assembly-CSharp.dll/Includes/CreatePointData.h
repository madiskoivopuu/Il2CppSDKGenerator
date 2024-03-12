#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreatePointData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreatePointData"));
	}

	template <typename T = bool> T& Update() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreatePointData*, uintptr_t))(Il2CppBase() + 0x1BCD09C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CreatePointData*, uintptr_t))(Il2CppBase() + 0x1BCD130))(this, reader);
	}

};

}
