#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapWorld"));
	}


	template <typename R = ITimeManager*> R get_TimeManager() {
		return ((R (*)(IMapWorld*))(Il2CppBase() + 0x0))(this);
	}

};

