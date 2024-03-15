#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDiplomacyContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDiplomacyContexts"));
	}


	template <typename R = DiplomacyContext*> R get_diplomacies() {
		return ((R (*)(IDiplomacyContexts*))(Il2CppBase() + 0x0))(this);
	}

};

