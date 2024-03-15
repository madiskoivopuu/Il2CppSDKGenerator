#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITrophyRoadContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITrophyRoadContexts"));
	}


	template <typename R = TrophyRoadDataContext*> R get_trophyRoad() {
		return ((R (*)(ITrophyRoadContexts*))(Il2CppBase() + 0x0))(this);
	}

};

