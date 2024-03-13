#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class IntToInt32ToIntMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "IntToInt32ToIntMap"));
	}

	template <typename T = MessageParser1IntToInt32ToIntMap*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OuterMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint32_t, Int32ToIntMap*>*> static T& _map_outerMap_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2int32_t, Int32ToIntMap*>*> T& outerMap_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1IntToInt32ToIntMap*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x14699F4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1469A58))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469B78))(this);
	}
	template <typename T = IntToInt32ToIntMap*> T Clone() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469CD0))(this);
	}
	template <typename T = MapField2int32_t, Int32ToIntMap*>*> T get_OuterMap() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469D2C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(IntToInt32ToIntMap*, Il2CppObject*))(Il2CppBase() + 0x1469D34))(this, other);
	}
	template <typename T = bool> T Equals_1(IntToInt32ToIntMap* other) {
		return ((T (*)(IntToInt32ToIntMap*, IntToInt32ToIntMap*))(Il2CppBase() + 0x1469DA4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469E30))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469E5C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(IntToInt32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1469EC0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469F60))(this);
	}
	template <typename T = void> T MergeFrom(IntToInt32ToIntMap* other) {
		return ((T (*)(IntToInt32ToIntMap*, IntToInt32ToIntMap*))(Il2CppBase() + 0x1469FF0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(IntToInt32ToIntMap*, uintptr_t))(Il2CppBase() + 0x146A068))(this, input);
	}

};

}
