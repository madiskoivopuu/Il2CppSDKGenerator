#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NeedExpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NeedExpComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(NeedExpComponent*, uintptr_t))(Il2CppBase() + 0x13A9248))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(NeedExpComponent*, uintptr_t))(Il2CppBase() + 0x13A93E0))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(NeedExpComponent*, uintptr_t))(Il2CppBase() + 0x13A9404))(this, targetObject);
	}

};

}
