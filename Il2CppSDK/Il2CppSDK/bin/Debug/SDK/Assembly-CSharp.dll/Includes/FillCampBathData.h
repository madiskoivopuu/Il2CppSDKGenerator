#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FillCampBathData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FillCampBathData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FillCampBathData*, uintptr_t))(Il2CppBase() + 0x16935C0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FillCampBathData*, uintptr_t))(Il2CppBase() + 0x1693624))(this, reader);
	}

};

}
