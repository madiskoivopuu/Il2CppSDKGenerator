#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonContexts"));
	}


	template <typename R = GameContext*> R get_MainContext() {
		return ((R (*)(ICommonContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = RelationshipManager*> R get_Relationship() {
		return ((R (*)(ICommonContexts*))(Il2CppBase() + 0x0))(this);
	}

};

