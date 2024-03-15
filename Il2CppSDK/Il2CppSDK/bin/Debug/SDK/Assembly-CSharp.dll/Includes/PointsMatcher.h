#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsMatcher"));
	}

	 static IMatcher1<PointsEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<PointsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<PointsEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<PointsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<PointsEntity*>*& _matcherPosition() {
		return *(IMatcher1<PointsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static IMatcher1<PointsEntity*>* get_Blueprint() {
		return ((IMatcher1<PointsEntity*>* (*)(void *))(Il2CppBase() + 0x1575B78))(0);
	}
	 static IMatcher1<PointsEntity*>* get_OldBlueprint() {
		return ((IMatcher1<PointsEntity*>* (*)(void *))(Il2CppBase() + 0x1575CF8))(0);
	}
	 static IMatcher1<PointsEntity*>* get_Position() {
		return ((IMatcher1<PointsEntity*>* (*)(void *))(Il2CppBase() + 0x1575E94))(0);
	}
	 static IAllOfMatcher1<PointsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<PointsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1576030))(0, indices);
	}
	 static IAllOfMatcher1<PointsEntity*>* AllOf_1(Il2CppArray<IMatcher1<PointsEntity*>*>* matchers) {
		return ((IAllOfMatcher1<PointsEntity*>* (*)(void *, Il2CppArray<IMatcher1<PointsEntity*>*>*))(Il2CppBase() + 0x15760A8))(0, matchers);
	}
	 static IAnyOfMatcher1<PointsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<PointsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1576120))(0, indices);
	}
	 static IAnyOfMatcher1<PointsEntity*>* AnyOf_1(Il2CppArray<IMatcher1<PointsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<PointsEntity*>* (*)(void *, Il2CppArray<IMatcher1<PointsEntity*>*>*))(Il2CppBase() + 0x1576198))(0, matchers);
	}

};

