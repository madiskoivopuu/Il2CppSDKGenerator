#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitAsyncd89
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitAsync>d__89"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = DataBlueprints> R& datablueprints() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = DataContexts*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = cDisplayClass890*> R& 8__1() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Task1<Il2CppDictionary<Il2CppString*, int32_t>*>*& stringMapsTask5__2() {
		return *(Task1<Il2CppDictionary<Il2CppString*, int32_t>*>**)((uintptr_t)this + 0x40);
	}
	 Task1<Il2CppList<EntityBlueprint*>*>*& recipeTask5__3() {
		return *(Task1<Il2CppList<EntityBlueprint*>*>**)((uintptr_t)this + 0x48);
	}
	 TaskFactory1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*& factory5__4() {
		return *(TaskFactory1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<ValueTuple2<Action1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>*>*> R& 7__wrap4() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& 7__wrap5() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 ValueTuple2<Action1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>*& contextEntry5__7() {
		return *(ValueTuple2<Action1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>**)((uintptr_t)this + 0x68);
	}
	 Task1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*& currentTask5__8() {
		return *(Task1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(InitAsyncd89*))(Il2CppBase() + 0xE96EE0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(InitAsyncd89*))(Il2CppBase() + 0xE96EE4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(InitAsyncd89*))(Il2CppBase() + 0xE9752C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(InitAsyncd89*))(Il2CppBase() + 0xE97534))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(InitAsyncd89*))(Il2CppBase() + 0xE97574))(this);
	}

};

