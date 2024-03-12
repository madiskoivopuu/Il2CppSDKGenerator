#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITrophyRoadContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITrophyRoadContexts"));
	}


	template <typename T = uintptr_t> T get_trophyRoad() {
		return ((T (*)(ITrophyRoadContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
