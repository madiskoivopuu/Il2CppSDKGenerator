#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IConfigsContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IConfigsContext"));
	}


	template <typename R = ConfigsContext*> R get_configs() {
		return ((R (*)(IConfigsContext*))(Il2CppBase() + 0x0))(this);
	}

};

