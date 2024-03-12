#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuseMountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Ids() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TypeIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelectedSkillSlots() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FuseMountData*, uintptr_t))(Il2CppBase() + 0x1601BE4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FuseMountData*, uintptr_t))(Il2CppBase() + 0x1601C48))(this, reader);
	}

};

}
