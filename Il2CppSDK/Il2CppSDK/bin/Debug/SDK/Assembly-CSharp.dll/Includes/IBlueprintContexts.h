#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintContexts"));
	}


	template <typename T = BlueprintDataContext*> T get_blueprint() {
		return ((T (*)(IBlueprintContexts*))(Il2CppBase() + 0x0))(this);
	}

};

