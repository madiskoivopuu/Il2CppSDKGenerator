#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Profiling {

class Profiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Profiling", "Profiler"));
	}


	template <typename R = void> static R BeginSample(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x16E5354))(0, name);
	}
	template <typename R = void> static R EndSample() {
		return ((R (*)(void *))(Il2CppBase() + 0x16E5358))(0);
	}

};

}
