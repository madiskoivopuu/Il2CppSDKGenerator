#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.Utility {

class Lists1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.Utility", "Lists`1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}