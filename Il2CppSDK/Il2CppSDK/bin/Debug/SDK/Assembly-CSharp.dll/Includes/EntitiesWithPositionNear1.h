#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class EntitiesWithPositionNear1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntitiesWithPositionNear`1"));
	}

	 EntityIndex2<T, int64_t>*& _entityIndex() {
		return *(EntityIndex2<T, int64_t>**)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& _x() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& _y() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& _radius() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}
	 IEnumerator1<T>* System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((IEnumerator1<T>* (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}
	 Enumerator<T>* GetEnumerator() {
		return ((Enumerator<T>* (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}

};

