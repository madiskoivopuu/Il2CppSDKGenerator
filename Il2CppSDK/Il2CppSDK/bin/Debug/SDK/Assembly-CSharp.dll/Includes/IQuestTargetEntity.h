#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestTargetEntity"));
	}


	template <typename T = bool> T get_isQuestTarget() {
		return ((T (*)(IQuestTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isQuestTarget(bool value) {
		return ((T (*)(IQuestTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
