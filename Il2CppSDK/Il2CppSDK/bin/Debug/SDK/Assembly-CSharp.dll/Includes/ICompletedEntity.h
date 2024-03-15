#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICompletedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICompletedEntity"));
	}


	template <typename R = bool> R get_isCompleted() {
		return ((R (*)(ICompletedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isCompleted(bool value) {
		return ((R (*)(ICompletedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

