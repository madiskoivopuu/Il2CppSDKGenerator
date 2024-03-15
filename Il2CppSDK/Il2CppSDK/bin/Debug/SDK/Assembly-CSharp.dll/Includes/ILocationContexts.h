#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocationContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocationContexts"));
	}


	template <typename R = LocationContext*> R get_locations() {
		return ((R (*)(ILocationContexts*))(Il2CppBase() + 0x0))(this);
	}

};

