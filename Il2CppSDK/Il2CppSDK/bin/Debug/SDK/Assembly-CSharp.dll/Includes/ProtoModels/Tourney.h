#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Tourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Tourney"));
	}

	template <typename T = MessageParser1Tourney*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& StateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TourneyState*> T& state_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Player*>*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Player*>*> T& players_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& MaxPlayersCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxPlayersCount_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& FakePlayersCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& fakePlayersCount_() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = MessageParser1Tourney*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x150B6EC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x150B750))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150B870))(this);
	}
	template <typename T = Tourney*> T Clone() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BA30))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BA8C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BA94))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BA9C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Tourney*, Il2CppString*))(Il2CppBase() + 0x150BAA4))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB24))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BB2C))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB34))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BB3C))(this, value);
	}
	template <typename T = TourneyState*> T get_State() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB44))(this);
	}
	template <typename T = void> T set_State(TourneyState* value) {
		return ((T (*)(Tourney*, TourneyState*))(Il2CppBase() + 0x150BB4C))(this, value);
	}
	template <typename T = RepeatedField1Player*>*> T get_Players() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB54))(this);
	}
	template <typename T = int32_t> T get_MaxPlayersCount() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB5C))(this);
	}
	template <typename T = void> T set_MaxPlayersCount(int32_t value) {
		return ((T (*)(Tourney*, int32_t))(Il2CppBase() + 0x150BB64))(this, value);
	}
	template <typename T = int32_t> T get_FakePlayersCount() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BB6C))(this);
	}
	template <typename T = void> T set_FakePlayersCount(int32_t value) {
		return ((T (*)(Tourney*, int32_t))(Il2CppBase() + 0x150BB74))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Tourney*, Il2CppObject*))(Il2CppBase() + 0x150BB7C))(this, other);
	}
	template <typename T = bool> T Equals_1(Tourney* other) {
		return ((T (*)(Tourney*, Tourney*))(Il2CppBase() + 0x150BBEC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BCE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150BE00))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Tourney*, uintptr_t))(Il2CppBase() + 0x150BE64))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Tourney*))(Il2CppBase() + 0x150C050))(this);
	}
	template <typename T = void> T MergeFrom(Tourney* other) {
		return ((T (*)(Tourney*, Tourney*))(Il2CppBase() + 0x150C2B0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Tourney*, uintptr_t))(Il2CppBase() + 0x150C37C))(this, input);
	}

};

}
