#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuseMountData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountData"));
	}

	template <typename R = Il2CppArray<int32_t>*> R& Ids() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TypeIndex() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SelectedSkillSlots() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FuseMountData*, uintptr_t))(Il2CppBase() + 0x1601BE4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FuseMountData*, uintptr_t))(Il2CppBase() + 0x1601C48))(this, reader);
	}

};

