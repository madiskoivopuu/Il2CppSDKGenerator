#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActTabsControllerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActTabsControllerContext"));
	}


	template <typename T = void> T ShowAct(QuestDataEntity* actData) {
		return ((T (*)(IActTabsControllerContext*, QuestDataEntity*))(Il2CppBase() + 0x0))(this, actData);
	}

};

