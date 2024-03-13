#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PredicateMatcherHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredicateMatcherHelper"));
	}


	template <typename T = PredicateMatcher1uintptr_t>*> static T AddPredicate(IMatcher1uintptr_t>* matcher, Il2CppString* name, Predicate1uintptr_t>* predicate) {
		return ((T (*)(void *, IMatcher1uintptr_t>*, Il2CppString*, Predicate1uintptr_t>*))(Il2CppBase() + 0x0))(0, matcher, name, predicate);
	}

};

