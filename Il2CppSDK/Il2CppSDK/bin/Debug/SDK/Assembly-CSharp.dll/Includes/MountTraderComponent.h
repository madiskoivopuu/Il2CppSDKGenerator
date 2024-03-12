#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountTraderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTraderComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& GradeSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MountsRandomGroupByType() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_GradeSettings() {
		return ((T (*)(MountTraderComponent*))(Il2CppBase() + 0x154981C))(this);
	}
	template <typename T = void> T set_GradeSettings(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MountTraderComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1549824))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MountsRandomGroupByType() {
		return ((T (*)(MountTraderComponent*))(Il2CppBase() + 0x154982C))(this);
	}
	template <typename T = void> T set_MountsRandomGroupByType(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MountTraderComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1549834))(this, value);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MountTraderComponent*, uintptr_t))(Il2CppBase() + 0x154983C))(this, targetObject);
	}

};

}
