#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTargetComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(QuestTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x170596C))(this, target);
	}

};

