#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Lifetime {

class LeaseSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "LeaseSink"));
	}

	template <typename T = uintptr_t> T& _nextSink() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}