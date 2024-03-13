#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveComponentHelper"));
	}


	template <typename T = bool> static T ReplaceActiveIfNeed(IActiveEntity* entity, bool newValue) {
		return ((T (*)(void *, IActiveEntity*, bool))(Il2CppBase() + 0x18AD25C))(0, entity, newValue);
	}

};

