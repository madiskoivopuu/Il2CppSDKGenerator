#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentsAOTInitializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentsAOTInitializer"));
	}


	template <typename T = void> static T InitializeAOTComponents() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2D6E4))(0);
	}

};

