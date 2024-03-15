#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INewsContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INewsContexts"));
	}


	template <typename R = NewsContext*> R get_news() {
		return ((R (*)(INewsContexts*))(Il2CppBase() + 0x0))(this);
	}

};

