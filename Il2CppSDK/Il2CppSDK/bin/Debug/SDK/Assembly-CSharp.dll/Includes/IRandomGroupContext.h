#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomGroupContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomGroupContext"));
	}


	template <typename R = RandomGroupDataContext*> R get_randomGroup() {
		return ((R (*)(IRandomGroupContext*))(Il2CppBase() + 0x0))(this);
	}

};

