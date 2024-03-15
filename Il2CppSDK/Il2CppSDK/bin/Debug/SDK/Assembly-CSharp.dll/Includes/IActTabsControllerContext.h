#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActTabsControllerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActTabsControllerContext"));
	}


	template <typename R = void> R ShowAct(QuestDataEntity* actData) {
		return ((R (*)(IActTabsControllerContext*, QuestDataEntity*))(Il2CppBase() + 0x0))(this, actData);
	}

};

