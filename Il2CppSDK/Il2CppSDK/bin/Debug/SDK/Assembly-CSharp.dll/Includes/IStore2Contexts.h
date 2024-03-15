#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStore2Contexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStore2Contexts"));
	}


	template <typename R = Store2Context*> R get_store2() {
		return ((R (*)(IStore2Contexts*))(Il2CppBase() + 0x0))(this);
	}

};

