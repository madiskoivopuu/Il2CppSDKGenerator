#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICompletedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICompletedEntity"));
	}


	template <typename T = bool> T get_isCompleted() {
		return ((T (*)(ICompletedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isCompleted(bool value) {
		return ((T (*)(ICompletedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
