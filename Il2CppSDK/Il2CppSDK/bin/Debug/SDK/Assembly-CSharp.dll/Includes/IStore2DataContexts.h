#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStore2DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStore2DataContexts"));
	}


	template <typename R = Store2DataContext*> R get_store2Data() {
		return ((R (*)(IStore2DataContexts*))(Il2CppBase() + 0x0))(this);
	}

};

