#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PredicateMatcherHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredicateMatcherHelper"));
	}


	template <typename T = void*> static T AddPredicate(void* matcher, Il2CppString* name, void* predicate) {
		return ((T (*)(void *, void*, Il2CppString*, void*))(Il2CppBase() + 0x0))(0, matcher, name, predicate);
	}

};

}
