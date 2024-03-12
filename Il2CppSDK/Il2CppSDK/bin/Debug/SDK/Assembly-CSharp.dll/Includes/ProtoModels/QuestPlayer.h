#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class QuestPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "QuestPlayer"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ProgressPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& progressPoints_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UpdatedAtFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& updatedAt_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& RankFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rank_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C39D48))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C39DAC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C39ECC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C39FDC))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A038))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(QuestPlayer*, int64_t))(Il2CppBase() + 0x1C3A040))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A048))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(QuestPlayer*, Il2CppString*))(Il2CppBase() + 0x1C3A050))(this, value);
	}
	template <typename T = int32_t> T get_ProgressPoints() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0D0))(this);
	}
	template <typename T = void> T set_ProgressPoints(int32_t value) {
		return ((T (*)(QuestPlayer*, int32_t))(Il2CppBase() + 0x1C3A0D8))(this, value);
	}
	template <typename T = int64_t> T get_UpdatedAt() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0E0))(this);
	}
	template <typename T = void> T set_UpdatedAt(int64_t value) {
		return ((T (*)(QuestPlayer*, int64_t))(Il2CppBase() + 0x1C3A0E8))(this, value);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A0F0))(this);
	}
	template <typename T = void> T set_Rank(int32_t value) {
		return ((T (*)(QuestPlayer*, int32_t))(Il2CppBase() + 0x1C3A0F8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A100))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A170))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A200))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A2CC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A330))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(QuestPlayer*))(Il2CppBase() + 0x1C3A440))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A5BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(QuestPlayer*, uintptr_t))(Il2CppBase() + 0x1C3A62C))(this, input);
	}

};

}
